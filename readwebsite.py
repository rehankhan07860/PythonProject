import urllib.request as urq

website = 'https://www.w3schools.com/html/default.asp'
file = urq.urlopen(website)

content = file.read()

f = open('myfile.html', 'wb')
f.write(content)