'''



HTTP Concepts
The Hypertext Transfer Protocol (HTTP) is the foundation of communication on the web. It is a protocol that governs how data is transmitted over the internet between clients (browsers or applications) and servers.

Core Concepts of HTTP
1. Client-Server Model
Client: The entity (e.g., web browser, mobile app) that initiates a request.
Server: The entity that processes the request and sends back a response (e.g., web server hosting a website).

3. HTTP Methods
HTTP defines several methods, each serving a specific purpose:

GET: Retrieves data from the server (e.g., loading a webpage).
POST: Sends data to the server (e.g., submitting a form).
PUT: Updates or replaces existing data on the server.
DELETE: Deletes data on the server.
HEAD: Retrieves only the headers of a response (no body).
OPTIONS: Describes communication options for the target resource.




'''

#  HTTP Requests
'''
GET /index.html HTTP/1.1
Host: www.example.com
User-Agent: Mozilla/5.0

'''

# HTTP Responses
'''
HTTP/1.1 200 OK
Content-Type: text/html
Content-Length: 123

<html>...</html>

'''