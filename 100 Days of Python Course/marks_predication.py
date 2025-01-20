import numpy as np
import pandas as pd
from sklearn.tree import DecisionTreeRegressor
from sklearn.ensemble import RandomForestRegressor
from sklearn.svm import SVR
from sklearn.model_selection import cross_val_score 
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error

mydata = pd.read_csv('F:\semester break work\machine learing\student_record.csv')

#to splite data into dependent and independent variable
X = mydata.drop('obtrain marks',axis=1)
y = mydata['obtrain marks']
print(X)

#to splite data into train and test
X_train,X_test,y_train,y_test = train_test_split(X, y, test_size=0.2, random_state= 42)


models = {
    'DecisionTreeRegression': DecisionTreeRegressor(),
    'RandomForestRegressor': RandomForestRegressor(),
    'svm': SVR()
}

for name, models in models.items():
    
    scores = cross_val_score(models, X_train, y_train, scoring= 'neg_mean_squared_error', cv = 5)
    mean_mse = -scores.mean()  # Convert negative MSE to positive
    print(f"{name}: Mean Squared Error = {mean_mse:.2f}")
    
print('As RandomForestRegressor shows minimum MSE ')

rf_regressor = RandomForestRegressor(random_state=42)
rf_regressor.fit(X_train, y_train)

#evaluate the model using MSE
y_pred = rf_regressor.predict(X_test)
mse = mean_squared_error(y_test, y_pred)
print(f"Mean Squared Error on test data: {mse:.2f}")
    

#predict for new input 
new_input = np.array([[70, 85, 80, 6]])
predicted_marks = rf_regressor.predict(new_input)
print(f"Predicted obtained marks for the input record: {predicted_marks[0]:.2f}")