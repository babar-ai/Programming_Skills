from fastapi import FastAPI

app = FastAPI()

@app.get('/')
def index():
    return {"message": {"name" : "welocome to FastAPI"}}


@app.get('/about')                        # here 'get' is the operation on the path and ('/') is the path where '@app' is 'path operation decorator'
def aboutme():                            #this is path operation funtion where fun name does't matter
    return {'data':'about Data' }

