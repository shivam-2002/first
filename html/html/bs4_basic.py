from bs4 import BeautifulSoup
soup=BeautifulSoup(htmlData,features="html.parent")
portfolio = soup.find("p",("id":"text")).parent()[0].parent()


print(portfolio)