import mysql.connector

mydb = mysql.connector.connect(
    host='localhost',
    user='root',
    password='',
    database='python'
)

myCursor = mydb.cursor()
sql = '''
CREATE TABLE users
(
    firstname varchar(50),
    lastname  varchar(50),
    email     varchar(60)
)
'''
myCursor.execute("CREATE DATABASE php")

for database in myCursor:
    print(database)
