#!/usr/bin/python3
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

    todoUrl = url + "/todos"
    response = requests.get(todoUrl)
    tasks = response.json()

    for task in tasks:
        title = task["title"]
        completed = task["completed"]
        dic = {"title": title, "completed": completed, "username": employeeName}
        data.append(dic)
           ;;s*  
    x = ({employeeId: data})
    y = json.dumps(x)
    with open('{}.json'.format(employeeId), 'w') as f:
        f.write(y)
    
