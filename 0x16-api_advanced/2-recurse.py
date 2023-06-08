#!/usr/bin/python3
""" Retrieves title of all hot posts
    from a subreddit
"""
import requests


# def recurse(subreddit, hot_list=[], fullname=None):
#     """ recursively executes `title` task """
#     header = {'User-agent': 'Mozilla/5.0 (X11; Linux x86_64)'}
#     url = 'https://www.reddit.com/r/{}/hot.json?after={}'.format(
#         subreddit, fullname)
#     response = requests.get(url, headers=header)
#     data = response.json()
#     fullname = data['data']['after']
#     try:
#         if fullname is not None:
#             recurse(subreddit, hot_list, fullname)
#         for titles in data['data']['children']:
#             title = titles['data']['title']
#             hot_list.append(title)
#         return hot_list
#     except BaseException:
#         return None
def recurse(subreddit, hot_list=[], after="", count=0):
    """Returns a list of titles of all hot posts on a given subreddit."""
    url = "https://www.reddit.com/r/{}/hot/.json".format(subreddit)
    headers = {
        "User-Agent": "linux:0x16.api.advanced:v1.0.0 (by /u/bdov_)"
    }
    params = {
        "after": after,
        "count": count,
        "limit": 100
    }
    response = requests.get(url, headers=headers, params=params,
                            allow_redirects=False)
    if response.status_code == 404:
        return None

    results = response.json().get("data")
    after = results.get("after")
    count += results.get("dist")
    for c in results.get("children"):
        hot_list.append(c.get("data").get("title"))

    if after is not None:
        return recurse(subreddit, hot_list, after, count)
    return hot_list