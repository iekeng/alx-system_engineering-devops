#!/usr/bin/python3
""" Retrieves title of all hot posts
    from a subreddit
"""
import requests


def recurse(subreddit, hot_list=[], fullname=None):
    """ recursively executes `title` task """
    header = {'User-agent': 'Mozilla/5.0 (X11; Linux x86_64)'}
    url = 'https://www.reddit.com/r/{}/hot.json?after={}'.format(
        subreddit, fullname)
    response = requests.get(url, headers=header)
    data = response.json()
    try:
        if response.status_code == 200:
            fullname = data['data']['after']
            recurse(subreddit, hot_list, fullname)
            for titles in data['data']['children']:
                title = titles['data']['title']
                hot_list.append(title)
            print(hot_list)
        return (None)
    except BaseException:
        return (None)
