#!/usr/bin/python3
<<<<<<< HEAD
"""Script to access a REST API for TODO lists of employees"""

import requests
import json
import sys

if __name__ == '__main__':
    data = []

    baseUrl = 'https://jsonplaceholder.typicode.com/users'
    employeeId = sys.argv[1]
    url = baseUrl + "/" + employeeId

    response = requests.get(url)
    employeeName = response.json().get('name')
=======
"""export data to JSON"""
import json
import requests
import sys

if __name__ == '__main__':
    baseUrl = 'https://jsonplaceholder.typicode.com/users'
    employeeId = sys.argv[1]
    url = baseUrl + "/" + employeeId
    data = []

    response = requests.get(url)
    userName = response.json().get('username')
>>>>>>> b19b5c8b452502b7198c73cd168a6aa19b550fbf

    todoUrl = url + "/todos"
    response = requests.get(todoUrl)
    tasks = response.json()

    for task in tasks:
<<<<<<< HEAD
        title = task["title"]
        completed = task["completed"]
        dic = {"title": title, "completed": completed, "username": employeeName}
        data.append(dic)
           ;;s*  
    x = ({employeeId: data})
    y = json.dumps(x)
    with open('{}.json'.format(employeeId), 'w') as f:
        f.write(y)
    
=======
        taskDic = {'task': task['title'],
                   'completed': task['completed'],
                   'username': userName}
        data.append(taskDic)

    jsonData = {employeeId: data}

    with open('{}.json'.format(employeeId), 'w') as f:
        json.dump(jsonData, f)
>>>>>>> b19b5c8b452502b7198c73cd168a6aa19b550fbf
