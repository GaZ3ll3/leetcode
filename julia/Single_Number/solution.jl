module solution

export SingleNumber

function SingleNumber(lst::Array{Int64,1})
	result::Int64 = 0
	for item in lst
		#Julia uses $ as xor operation
		result $= item
	end
	return result
end

function SingleNumber(lst::Array{Int64,1},n::Int64)
	return mapreduce(x->lst[x],$,[1:n])

end
end
