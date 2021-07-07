#Q2
Std = data.frame(Name=c("Abhishek","Obama","MODI", "JETHALAL","Babaramdev"),
                 Gender=c("M","M","M","M","M"),
                 MARKS=c(20,18,17,26,99),
                 UID=c("2346","1779","5433","1987","6576"),
                 PHONE=c("2323525","5235","23523","235","2352")
)
print("Details of the Std:")                      
print(Std)

newStd = data.frame(Name=c("jonny"),
                 Gender=c("M"),
                 MARKS=c(21),
                 UID=c("1827"),
                 PHONE=c("23235"))

Std =  rbind(Std, newStd)
print("After adding new row(s) to an existing data frame:")
print(Std)


#list of marks dataframe
list =data.frame( marks=c(2, 40, 2,NA, 502, 177, 7, 9,45,17)) 
#calculating mean and ignoring NA
mean(list$marks, na.rm = TRUE)

v <- 1:10
print("Original vector:")
print(v)
n <- v[7,3,9]
print(n)
