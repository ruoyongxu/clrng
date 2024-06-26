% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/fisher_sim.R
\name{fisher.sim}
\alias{fisher.sim}
\title{fisher.sim}
\usage{
fisher.sim(
  x,
  N,
  streams,
  Nglobal = getOption("clrng.Nglobal"),
  type = getOption("clrng.type"),
  returnStatistics = FALSE,
  verbose = FALSE
)
}
\arguments{
\item{x}{a vclMatrix of integers.}

\item{N}{an integer specifying number of replicates.}

\item{streams}{a vclMatrix of streams. Default using streams with package default initial seeds.}

\item{Nglobal}{a (non-empty) integer vector specifying size of the index space on GPU for use, with default value from global option 'clrng.Nglobal'.}

\item{type}{a character string specifying "double" or "float" of the returned test statistics, with default value from global option 'clrng.type'.}

\item{returnStatistics}{a logical value, if TRUE, return test statistics, default is FALSE.}

\item{verbose}{a logical value, if TRUE, print extra information, default is FALSE.}
}
\value{
a `htest' object of p-value and actual number of replicates and a list of test statistics, streams used, threshold.
}
\description{
Performs Monte carlo's simulation for Fisher's exact test on GPU.
}
\examples{
library('clrng')
if (detectGPUs() >= 1) {
  setContext(grep("gpu", listContexts()$device_type)[1])
  
  Job <- matrix(c(1,2,1,0, 3,3,6,1, 10,10,14,9, 6,7,12,11), 4, 4)
  Job <- gpuR::vclMatrix(Job, type="integer")
  
  getOption('clrng.type')
  options(clrng.Nglobal = c(64,16))
  streams <- createStreamsGpu()
  result <- fisher.sim(Job, 1e5, streams = streams)
  print(result)
  result$streams
  result$threshold
} else {
  message("No GPU context available")
}

}
