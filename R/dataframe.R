print("to create a data frame and put data for 5 employees " )

Emp = data.frame(Name=c("Abhishek","Obama","MODI", "JETHALAL","Babaramdev"),
                 Gender=c("M","M","M","M","M"),
                 Age=c(20,50,65,26,99),
                 Designation=c("student","EX-president","president","CEO-gadaelectronics","YOGA-Guru"),
                 ROLL=c("2346","1779","5433","1987","6576"),
                 PHONE=c("2323525","5235","23523","235","2352")
)
print("Details of the employees:")                      
print(Emp)
nrow(Emp)
ncol(Emp)
remp<-rbind(Emp,Emp)
cemp<-cbind(Emp,Emp)
remp 
cemp
head(remp,2)
tail(cemp,2)
str(Emp)
summary(E)