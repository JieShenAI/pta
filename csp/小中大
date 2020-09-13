n = int(input())
List = []

List = input().split()

List = [int(i) for i in List]

# print(List)

# 判断是升序还是降序

length = len(List)

# 我们默认升序
Min = List[0]
Max = List[-1]

# 求中位数
# 如果长度是奇数
if length % 2 != 0:
    index = length//2
    mid = List[index]
else:
    # 说明长度是偶数，需要取中间两个数再除2
    index1 = int(length / 2) - 1
    index2 = index1 + 1
    mid = (List[index1] + List[index2])/2


if List[0] > List[-1]:
# 如果数列的第一个数不小于最后一个数，数列绝对不是增数列
# Min 和 Max换一下就行了，中位数mid不变
    temp = Min
    Min = Max
    Max = temp

print(Max,end = ' ')

if (mid - int(mid)) == 0:
    print(int(mid),end = ' ')
else:
    print("%.1f" % mid,end = ' ')

print(Min)
