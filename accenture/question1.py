s=input()
if ( len(s)<10):
    print(s)

if ( len(s)>10):
    ans=s[0]
    ans+="9"
    ans+=s[-1]
    print(ans)