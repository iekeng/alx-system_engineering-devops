#!/usr/bin/python3
"""export data to JSON"""
import requests
import sys
import json

if __name__ == '__main__':
    baseUrl = 'https://jsonplaceholder.typicode.com/users'
    employeeId = sys.argv[1]
    url = baseUrl + "/" + employeeId
    data = []

    response = requests.get(url)
    userName = response.json().get('username')

    todoUrl = url + "/todos"
    response = requests.get(todoUrl)
    tasks = response.json()

    for task in tasks:
        taskDic = {'task': task['title'],
                   'completed': task['completed'],
                   'username': userName}
        data.append(taskDic)

    jsonData = {employeeId: data}

    with open('{}.json'.format(employeeId), 'w') as f:
        json.dump(jsonData, f)
