"""Finding Number"""
def main():
    """Finding Number"""
    n = int(input())
    m = input().split()
    ans = int(input())
    anss = "No"
    for i in m:
        if int(i) == ans:
            anss = "Yes"
            break
    print(anss)
main()
