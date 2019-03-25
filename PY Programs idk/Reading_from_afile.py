#reading from a file
text= open('file.txt','r').read()
print(text)
#instead of reading the entile thing if we wanted to read line by line
text2= open('file.txt','r').readlines()
print(text2)
#outputis like this ['text to save\n', '\n', 'new info']
#storing under pythonlist in text2
