module solution

export SingleNumber

function SingleNumber(lst::Array{Int64,1})
	result_one::Int64 = 0
	result_two::Int64 = 0
	result_three::Int64 = 0

	for item in lst
		#Julia uses $ as xor operation
		result_two |= result_one & item
		result_one $= item
		result_three = ~(result_one & result_two)
		result_one &= result_three
		result_two &= result_three
	end
	return result_one
end

function SingleNumber(lst::Array{Int64,1},n::Int64)
	return mapreduce(x->lst[x],$,[1:n])

end
end
