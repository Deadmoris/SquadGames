import re
object = open('newfile.txt','wt')
data = open('file.txt').readlines()
floatprog = re.compile('\".*\",(\d+\.*\d*)')
#vanillaprog = re.compile(r'A3\\Sounds_F')


def floatrepl(matchobj):
    #print (floatprog.findall(matchobj)[0])
    return (float(floatprog.findall(matchobj)[0]))/2

for lines in data:
    #print(floatprog.findall(lines))
    #if (floatprog.search(lines) and not(vanillaprog.search(lines))):
    if floatprog.search(lines):
        print(re.sub(r'(.*?",)(\d+\.\d+)(.*?};)',(r'\1 ' + str(floatrepl(lines)) + r' \3'), lines))
        object.write(re.sub(r'(.*?",)(\d+\.\d+)(.*?};)',(r'\1 ' + str(floatrepl(lines)) + r' \3'), lines))
    else:
        print(lines)
        object.write(lines)
object.close()
    #for lines in data:
    #text = re.sub(r'(.*?)sound\[\] = {(\"[^.]*\"),"\d+\.\d+"(.*?)};', '\1(\2 / 2)\3\4', lines)
    #print (text)
    #object.write(text)
#object.close()



# print([re.sub(r'(.*?)sound\[\] = {(\"[^.]*\"),"\d+\.\d+"(.*?)};', r'\1sound\[\] = {\2,(\3 / 2)\4};', line) for line in object.read()])
# object.write(re.sub(r'(.*?)sound\[\] = {(\"[^.]*\"),"\d+\.\d+"(.*?)};', r'\1sound\[\] = {\2,(\3 / 2)\4};', data))
#[object.write(re.sub(r'(.*?)sound\[\] = {(\"[^.]*\"),"\d+\.\d+"(.*?)};', r'\1', line)) for line in data]  re.sub(r'(.*?)sound\[\] = {(\"[^.]*\"),(\d+\.\d+)(.*?)};', r'\1', line)
