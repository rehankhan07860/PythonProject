#network programming
import socket as s 

host = 'www.instagram.com'

try:
    print(s.gethostbyname(host))
except s.gaierror:
    print("Yoou are chutiya")