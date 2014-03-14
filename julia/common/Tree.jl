abstract Tree{T}

type EmptyTree{T} <: Tree{T}
end


type TreeNode{T} <: Tree{T}
    val:: T
    left:: Tree{T}
    right:: Tree{T}
end

function TreeNode{T}(value::T)
    return TreeNode{T}(value,EmptyTree{T}(),EmptyTree{T}())
end

function Depth(root::Tree)
    if typeof(root)<:EmptyTree
        return 0
    end
    l = 1 + Depth(root.left)
    r = 1 + Depth(root.right)
    return max(l,r)
end
