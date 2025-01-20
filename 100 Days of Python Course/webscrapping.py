import requests
from bs4 import BeautifulSoup

url = "https://www.google.com/search?q=uet+mardan&oq=&gs_lcrp=EgZjaHJvbWUqCQgBECMYJxjqAjIJCAAQIxgnGOoCMgkIARAjGCcY6gIyCQgCECMYJxjqAjIJCAMQIxgnGOoCMgkIBBAjGCcY6gIyCQgFECMYJxjqAjIJCAYQIxgnGOoCMgkIBxAjGCcY6gLSAQkxNTg2ajBqMTWoAgiwAgE&sourceid=chrome&ie=UTF-8 "
responce = requests.get(url)

#if the responcse is come bt 200 to 299 means request successfully 
# print(r)  #<Response [200]>

# to parse HTML content
soup = BeautifulSoup(responce.text,"lxml")    #In this case, "lxml" is chosen, which is a very fast and efficient parser for both HTML and XML.
                                               #lxml is known for its speed and robustness, and it can handle broken HTML better than some other parsers.
# print(soup)

# # Example: Find all links on the page
# links = soup.find_all('a')
# for link in links:
#     print(link.get('href'))
 
#to get all the div tags
# print(soup.div.p)


# to get all the attributs 
tag = soup.header
atb = tag.attrs
print(atb)
