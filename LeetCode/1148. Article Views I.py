import pandas as pd

def article_views(views: pd.DataFrame) -> pd.DataFrame:
    arr = views[views["author_id"] == views["viewer_id"]]
    arr2 = np.sort(arr["author_id"].unique())
    return pd.DataFrame({"id":arr2})

# https://leetcode.com/problems/article-views-i/
