from Grasshopper.Kernel.Data import GH_Path
from Grasshopper import DataTree

#///input TreeData
OTreeData = []
for i in range(TreeData.BranchCount):
    temp = []
    for j in TreeData.Branch(i):
        temp.append(j)
    OTreeData.append(temp)


tree = DataTree[object](OTreeData[1],GH_Path(1))
print (tree)

addPoint = OTreeData[0][1]
print (addPoint)
#<Rhino.Geometry.Point object at 0x00000000000000A3 [Rhino.Geometry.Point]>
tree.Add(addPoint) #最后一个路径分支上添加项
print (tree)
#tree {5}

tree.Add(addPoint,GH_Path(59)) #追加同一数据，指定路径
print (tree)
#tree {5;1}

addPoints = OTreeData[3]
tree.AddRange(addPoints,GH_Path(9)) #列表的添加到指定路径
print (tree)
#tree {5;4;1}

#///提取与清除树形数据的方法
#///提取
#tree.Branch() 参数为指定路径的索引值或者GH_Path()指定路径
#tree.AllData() 同时返回所有路径下在数据到单一列表下
#///清除
#tree.Clear() 不保留数据结构清除
#tree.ClearData() 保留数据结构清除

allData = tree.AllData() #所有数据返回到一个列表下
print (allData)
#flattenData = tree.Flatten() #///与flatten的差别在？Flatten()把对象本身给拍平了

branch2 = tree.Branch(2)
print (branch2)
branch59 = tree.Branch(GH_Path(59))
print (branch59)

new_tree0 = DataTree[object](tree)
new_tree0.Clear() #///不保留数据结构的清除
print (new_tree0)
#empty tree 

new_tree1 = DataTree[object](tree)
new_tree1.ClearData() #///保留数据结构的清除方式
print (new_tree1)
#tree {0;0;0} 

#///增加路径分支 数据展平 移植项值的方法
#tree.EnsurePath(GH_Path) 新增一个分支，如果存在则不增加
#tree.Flatten() 将所有路径分支下的项值放置于一个路径分支之下
#tree.Graft() 一种是指定路径，仅将指定路径下的项值移植在单独路径下；如果不指定，则是将所有路径下的项值单独放置各自路径分支下

tree.EnsurePath(GH_Path(60)) #增加新的路径分支
print (tree)
#tree {5;4;1;0}

ftree = DataTree[object](tree)#复制树
ftree.Flatten() #拍平树
print (ftree)
#tree {10}
ftree.Graft() #移植所有路径分支下的项值到各自单独路径分支下
print (ftree)
#tree {1;1;1;1;1;1;1;1;1;1}

ftree = DataTree[object](tree)
ftree.Graft(GH_Path(9)) #仅移植指定路径分支下的所有项值到各自单独的路径分支下
print (ftree)
#tree {5;1;1;1;1;1;0}

#///其他DataTree的方法
#tree.Insert(data(T),Gh_path,index) 根据指定的路径和指定该路径下的索引值位置插入项值
#tree.ItemExists(GH_Path,index) 根据判定指定路径下的索引值是否存在，返回True,False
#tree.PathExists(GH_Path) 仅判断指定的路径是否存在
#tree.Remove(GH_Path) 移除指定路径以及该路径下的所有项值
#tree.MergeTree(DataTree(T)) 合并两个路径分支，如果路径分支相同则将项值放置于一个路径之下，不同则不进行路径下项值的合并，而各自单独放置于各自的路径分支之下合并
#tree.Path(index) 指定路径的索引值获取该路径
#tree.RenumberPaths()将所有路径分支按照顺序从0开始重新命名
#tree.SimplifyPaths() 可以简化路径分支

addPoint = OTreeData[2][3]
ftree.Insert(addPoint,GH_Path(9,0),2)
print (ftree)
#tree {5;3;1;1;1;1;0} #///如果索引值超出了最大索引值，那么自动填补其间填补索引项，值则为空值(null)

returnv = ftree.ItemExists(GH_Path(9,0),2) #判断指定路径下的索引值是否存在
print (returnv)
#True

returnv = ftree.ItemExists(GH_Path(9,0),3)
print (returnv)
#False

returnpe = ftree.PathExists(GH_Path(9,0)) #判断指定路径是否存在
print (returnpe)
#True

returnpe = ftree.PathExists(GH_Path(10))
print (returnpe)
#False

returnp =ftree.Path(5) #根据指定的路径索引值返回路径
print (returnp)
#{59}

ftree.RemovePath(GH_Path(9,3))#移除指定的路径，以及该路径下的所有值
print (ftree)
#tree {5;3;1;1;1;0}

ftree.MergeTree(tree) #合并两个树形数据，被合并的对象是ftree
print (ftree)
#tree {10;4;3;1;1;2;0}

ftree.RenumberPaths() #将所有的路径分支按照顺序从0开始重新命名
print (ftree)
#tree {10;4;3;1;1;2;0}

initTree = TreeData
initTree.SimplifyPaths() #简化路径分支
print (initTree)
#tree {4;4;4;4}

#///DataTree的基本属性
#tree.BranchCount 统计所有路径分支的数量
#tree.DataCount 统计各个路径分支下所有项值的数量
#tree.TopologyDescription 获取路径分支结构
#tree.Branches 将所有路径分支下的项值放置于各自的子列表中后，放置于父级列表下
#tree.Paths 将所有路径分支放置于一个列表下

branchCount = ftree.BranchCount #统计所有路径分支的数量
print (branchCount)
#7

dataCount = ftree.DataCount #统计所有路径分支下的所有值的数量
print (dataCount)
#21

branches = ftree.Branches #将所有路径分支下的项值放置在各自的子列表下后放置于父列表下
#print (branches) 

pathlst = ftree.Paths
print (pathlst)

dec = ftree.TopologyDescription #获取路径分支结构
print (dec)
"""
{0} (N = 10)
{1} (N = 4)
{2} (N = 3)
{3} (N = 1)
{4} (N = 1)
{5} (N = 2)
{6} (N = 0)
"""