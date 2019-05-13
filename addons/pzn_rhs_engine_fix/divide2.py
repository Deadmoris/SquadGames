import re
#object = open('newfile.txt','wt')
data = open('file.txt').readlines()
floatprog = re.compile('\".*\"')

for lines in data:
    print(floatprog.findall(lines))