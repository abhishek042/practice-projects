#logical
l=TRUE
print(class(l))
#numeric
n<-12.5
print(class(n))
#integer 
i<-70
print(class(i))
#complex
c=3+9i
print(class(c))
#char
ch="cam wats good"
print(class(ch))
#raw
r=charToRaw("cam wats good")
print(class(r))

#list
j<-list(c(1,2,3),98,23L,"hellp",4+3i)
print(j)
print(class(j))

#matrix
M=matrix(data =c(1,2,3,4,5,6),nrow=3,ncol=3,byrow = TRUE)
print(M)
print(class(M))

#array
a=array(data = c(1,2),dim = c(3,3,2))
print(a)

#factors
fru=c("mango","apple","apple","mango")

#ls
print(ls())

#rm
rm(list = ls())
help("array")