print(seq(1,20))
print(mean(1:20))
print(sum(1:20))
#user defined
cal<-function(a){
  for (i in 1:a) {
    b<-i^2
    print(b)
    
  }
}
cal(9)
print(class(cal))

cal.2<-function(a,q,c){
  result<-a+q+c
  print(result)
}
cal.2(12,1,12)
v=c(5,6,3,5,6,2,4,6,4)
print(mean(v))
print(mean(v,trim = .2,na.rm = TRUE))
print(median(v))

gmode <- function(v) {
  uni<- unique(v)
  uni[with.max()]
  
}
