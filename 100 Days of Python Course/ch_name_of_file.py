import os 

#to load folder

folder_path = 'F:\5th semester\info to information Security\mid course\assignment 2 Infosec (File responses)-20241208T185041Z-001'
prefix = '2'
init = 1
for file_name in os.listdir(folder_path):
    
    if file_name.endswith('.pdf'):
        
        #to find new old path
        old_path = os.path.join(folder_path,file_name)
        new_name = prefix + 