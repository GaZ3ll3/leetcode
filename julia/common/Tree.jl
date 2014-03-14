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

function isEmpty(root::Tree)
    return typeof(root)<:EmptyTree
end

function Depth(root::Tree)
    if isEmpty(root)
        return 0
    end
    l = 1 + Depth(root.left)
    r = 1 + Depth(root.right)
    return max(l,r)
end



function PreOrder(root::Tree, Ftn) #DFS
    if !isEmpty(root)
        Ftn(root); 
        PreOrder(root.left,Ftn);
        PreOrder(root.right,Ftn);
    end
end

function PostOrder(root::Tree,Ftn)
    if !isEmpty(root)
        PostOrder(root.left,Ftn);
        PostOrder(root.right,Ftn);
        Ftn(root); 
    end
end

function InOrder(root::Tree,Ftn)
     if !isEmpty(root)
        InOrder(root.left,Ftn);
        Ftn(root); 
        InOrder(root.right,Ftn);
    end   
end

function levelorder(root::Tree,Ftn) # BFS 
    Q = Tree[]
    push!(Q,root)
    while length(Q)!=0
        top = shift!(Q)
        Ftn(top)
        if !isEmpty(top.left)
            push!(Q,top.left)
        end
        if !isEmpty(top.right)
            push!(Q,top.right)
        end
    end
end




