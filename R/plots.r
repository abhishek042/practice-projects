#TO IMPLEMENT REGRESSION ANALYSIS USING R
a<-c(1,2,3,4,5,6,7)
b<-c(9,8,7,6,5,4,3)
relation<-lm(a~b)
print(relation)
summary(relation)
plot(a,b)
abline(relation)
plot(b,a,col = "blue",abline(lm(a~b), col="brown"))
plot(b,a,col = "red",abline(relation, col="blue"))

d<-data.frame(a)
predict(relation,d)

barplot(a)
barplot(relation)#Not run 

pie(a,b)

hist(a)


plot(a,type = "o",col = "red", xlab = "Month", ylab = "Rain fall", 
     main = "Rain fall chart")

lines(b, type = "o", col = "blue")

install.packages("gamair")
library(help=gamair)