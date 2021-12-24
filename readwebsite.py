import urllib.request as urq

website = 'https://www.w3schools.com/html/default.asp'

file = urq.urlopen(website)

print(file.read())