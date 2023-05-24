#!/usr/bin/python3
"""export data to CSV"""
import requests
import sys

if __name__ == '__main__':
    baseUrl = 'https://jsonplaceholder.typicode.com/users'
    employeeId = sys.argv[1]
    url = baseUrl + "/" + employeeId

    response = requests.get(url)
    userName = response.json().get('username')

    todoUrl = url + "/todos"
    response = requests.get(todoUrl)
    tasks = response.json()

    with open('{}.csv'.format(employeeId), 'w') as f:
        for task in tasks:
            f.write('"{}","{}","{}","{}"\n'.format(
                employeeId, userName, task['completed'], task['title']))
