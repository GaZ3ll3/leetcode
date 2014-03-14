using Base.Test

include("../common/Tree.jl")

root = TreeNode(1,
		TreeNode(2,
			TreeNode(3),
			TreeNode(4)
			)
			, 
		TreeNode(5,
			TreeNode(6),
			TreeNode(7)
			)
		)


empty = EmptyTree{Int64}()

@time @test Depth(empty)==0

@time @test Depth(root)==3


