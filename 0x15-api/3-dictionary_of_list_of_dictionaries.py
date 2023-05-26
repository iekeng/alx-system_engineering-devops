#!/usr/bin/python3
"""export data to JSON"""
import json
import requests

if __name__ == '__main__':
    url = 'https://jsonplaceholder.typicode.com/users/'
    response = requests.get(url)
    users = response.json()

    with open('todo_all_employees.json', 'w') as file:
        objs = {}
        for user in users:
            todoUrl = '{}{}/todos'.format(url, user['id'])
            todo = requests.get(todoUrl)
            username = user['username']
            props = []
            userId = ''
            tasks = todo.json()
            for task in tasks:
                obj = {
                    'task': task['title'],
                    'completed': task['completed'],
                    'username': username}
                userId = task['userId']
                props.append(obj)
                objs[userId] = props
            json.dump(objs, file)
