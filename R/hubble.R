f <- c(151, 174, 138, 186, 128, 136, 179, 164, 152,146)
s <- c(63, 81, 56, 91, 47, 57, 76, 72, 62,68)

relation <- lm(s~f)
a <- data.frame(f = 164)
result <- predict(relation,a)
print(result)

install.packages("mlbench")
library(mlbench)
data()
data(package =.packages(all.available = TRUE))
data(BostonHousing)
print(BostonHousing)
plot(BostonHousing$zn,BostonHousing$rm)



install.packages("gamair")
data()
data(package = .packages(all.available = TRUE))
library(gamair)
data(hubble)
print(hubble)
kmto <-3.19*10^(-19)
plot(hubble$x,hubble$y*kmto,col = "blue",xlab = "km sec-1", ylab = "mega-parsec")
relation <-lm(hubble$y*kmto~1+hubble$x)
abline(relation)
div= 602*24*365
data <- coef(relation)
age <- 1/data/div
print(age)

rel2 <-lm(log(hubble$y)~1+offset(log(hubble$x)))
plot(log(hubble$x),log(hubble$y),xlab = "distance",ylab = "Vel")
abline(rel2)
data2 <-coef(rel2)
age2 <- 1/data2/div
age2
