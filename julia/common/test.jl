include("List.jl")


function Reverse(lst::List)
	if typeof(lst)<:Nil
		return nil()
	end
	if typeof(lst.tail)<:Nil
		return lst
	end
	temp = lst.tail
	elt = typeof(lst.head)
	st = elt[]
	push!(st,lst.head)
	while !(typeof(temp)<:Nil)
		push!(st,temp.head)
		temp = temp.tail
	end

	endnode = nil(elt)
	while length(st)!=0
		val = shift!(st)
		newlist = append(list(val),endnode)
		endnode = copylist(newlist)
	end
	return endnode
end


a = list(1,2,3,4)

@time t = Reverse(a)

print(t)
