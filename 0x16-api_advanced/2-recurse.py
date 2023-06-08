#!/usr/bin/python3
""" Retrieves title of all hot posts
    from a subreddit
"""
# import requests


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
#         # print(hot_list)
#     except BaseException:
#         return None

# #!/usr/bin/python3
# """Advanced API module using reddit api endpoint"""
import requests
after = None


def recurse(subreddit, hot_list=[]):
    """
    Recursively queries the Reddit API and returns a list of all hot article
    titles for a given subreddit.
    """
    global after
    user_agent = {'User-Agent': 'api_advanced-project'}
    url = "https://www.reddit.com/r/{}/hot.json".format(subreddit)
    parameters = {'after': after}
    results = requests.get(url, params=parameters, headers=user_agent,
                           allow_redirects=False)

    if results.status_code == 200:
        after_data = results.json().get("data").get("after")
        if after_data is not None:
            after = after_data
            recurse(subreddit, hot_list)
        all_titles = results.json().get("data").get("children")
        for title_ in all_titles:
            hot_list.append(title_.get("data").get("title"))
        return hot_list
    else:
        return (None)