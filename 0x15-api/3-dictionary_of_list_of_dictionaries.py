#!/usr/bin/python3
<<<<<<< HEAD
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
    # done = 0
    # done_tasks = []

    for task in tasks:
        print('"{}", "{}", "{}", "{}"\n'.format(employeeId, userName, task.completed , task.title))
        # if task.get('completed'):
        #     done_tasks.append(task)
        #     done += 1

    # print("Employee {} is done with tasks({}/{}):"
    #       .format(employeeName, done, len(tasks)))

    # for task in done_tasks:
    #     print("\t {}".format(task.get('title')))


=======
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
                    'username': username,
                    'task': task['title'],
                    'completed': task['completed']}
                userId = task['userId']
                props.append(obj)
            objs[userId] = props
        json.dump(objs, file)
>>>>>>> b19b5c8b452502b7198c73cd168a6aa19b550fbf
