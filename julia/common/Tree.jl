abstract Tree{T}

type EmptyTree{T} <: Tree{T}
end


type TreeNode{T} <: Tree{T}
	val:: T
	left:: Tree{T}
	right:: Tree{T}
end


function TreeNode{T}(value::T)
	return TreeNode(value,EmptyTree{T}(),EmptyTree{T}())
end

