a<-c(1,2,3,4,NA)
b<-c(6,7,8,NA,10)
c<-c(11,12,NA,14,15)
d<-c(16,NA, 18,19,20)
e<-c(21,22,23,24,25)

df<-data.frame(a,b,c,d,e)

nrow(df)
ncol(df)

stack(df)

rdf<-rbind(df,df,df)
cdf<-cbind(df,df,df)

class(rdf)
class(cdf)

head(rdf)
tail(rdf)
head(rdf,2)
tail(rdf,2)

str(rdf)
rdf$c


#create vector
a<-c(1,2,3,4,NA)
b<-c(6,7,8,NA,10)
c<-c(11,12,NA,14,15)
d<-c(16,NA, 18,19,20)
e<-c(21,22,23,24,25)

a#display vector

df<-data.frame(a,b,c,d,e)#create data frame
df#display data frame
nrow(df)#check number of rows
ncol(df)#check number of columns
stack(df)#data frame in the form of stack

rdf<-rbind(df,df,df)#appending the rows
cdf<-cbind(df,df,df)#appending the columns

rdf#display data frame
cdf#display data frame
class(rdf)#check the class of data frame
class(cdf)#check the class of data frame

head(rdf)#display first 6 rows from top
tail(rdf)#display last 6 rows from  bottom
head(rdf,2)#display first 2 rows from top
tail(rdf,2)#display last 2 rows from bottom

str(rdf)#display the structure of the dataframe
rdf$c#diplay particular column using data frame

summary(rdf) #diplay summary of each column i.e. mean, median, max,min, na's and quartile
names(rdf)#names in data frame
colnames(rdf)#column names in data frame 
rownames(rdf)#row names in data frame
colnames(rdf)<-c("a1","b1","c1","d1","e1")#changing the column names
rdf#display data frame

View(rdf)#display dataframe as workbook
fix(rdf)#popout dataframe as excel 

trdf<-t(rdf)#transpose the data frame
trdf#display the data frame
class(trdf)#check the class
trdf1<-as.data.frame(trdf)#converting datatype from matrix to data frame
class(trdf1)#check the class

nrdf<-na.omit(rdf)#displaying the rows with no missing elements
nrdf#display dataframe