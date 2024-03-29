#' @title setBaseCreator
#' @description Set the initial seed of the package or stream
#' @param initial Initial state of the first stream, length 6, recycled if shorter. Default is c(12345,12345,12345,12345,12345,12345)
#' @return A stream object of class 'vclMatrix' on GPU
#' @examples
#' setBaseCreator(c(111,222,333,444,555,666))
#' @useDynLib clrng
#' @export


    setBaseCreator <- function(initial = rep(12345,6)) {
      
      initial = as.integer(initial)
      
      # if(any(initial[1:3] >= rep(2147483647,3)){
      #   stop('CLRNG_INVALID_SEED')
      # }
      
      if(any(initial[4:6] >= rep(2147462579,3))){
        stop('CLRNG_INVALID_SEED')
      }
      
      if(length(initial) != 6){
        # message('initial seed should be a vector of 6 integers!')
        initial = rep_len(initial, 6)
      }
      # Check that the seeds have valid values
      if(any(initial < 0))
        stop('CLRNG_INVALID_SEED')
  
  
      if(all(initial[1:3] == c(0,0,0)) | all(initial[4:6] == c(0,0,0)))
        stop('CLRNG_INVALID_SEED')

      assign(".Random.seed.clrng", initial, envir = .GlobalEnv)
    }

    
    
    
    
#' @title createStreamsGpu
#' @description Generate streams on GPU device
#' @param n number of streams to create, default is 1024
#' @return A stream object of class 'vclMatrix' on GPU
#' @examples
#' setBaseCreator(rep(12345,6))
#' myStreamsGpu = createStreamsGpu(n=4)
#' t(as.matrix(myStreamsGpu))
#' myStreamsGpu2 = createStreamsGpu(n=4)
#' t(as.matrix(myStreamsGpu2))
#' @useDynLib clrng    
#' @export
    createStreamsGpu = function(n=1024){
      
      streamsR<-gpuR::vclMatrix(0L, nrow=as.integer(n), ncol=12, type="integer")
      streamsCpu<- matrix(0L, nrow=as.integer(n), ncol=12)
      
      if(!exists(".Random.seed.clrng")) {
        assign(".Random.seed.clrng", setBaseCreator())
      } 
                                   
      
      currentCreator = CreateStreamsBackend(
        .Random.seed.clrng,    
        streamsR,
        streamsCpu,
        onGpu=TRUE,
        keepInitial=TRUE)
      
      # gpuR::colnames(streamsR) = c("current.g1.1", "current.g1.2", "current.g1.3", "current.g2.1", "current.g2.2", "current.g2.3",
      #                              "initial.g1.1", "initial.g1.2", "initial.g1.3", "initial.g2.1", "initial.g2.2", "initial.g2.3"
      #                              # "substream.g1.1", "substream.g1.2", "substream.g1.3", "substream.g2.1", "substream.g2.2", "substream.g2.3"
      # )
      
      assign(".Random.seed.clrng",  currentCreator, envir = .GlobalEnv)
      streamsR
      
    }
    



