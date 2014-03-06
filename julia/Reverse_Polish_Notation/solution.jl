module solution

export evalRPN

function evalRPN(lst::Array{ASCIIString,1})
	res = Int64[]
	for eachstr in lst
		if (eachstr[1]=='-') & (length(eachstr) > 1) | (eachstr[1]>='0') & (eachstr[1]<='9')
			push!(res,int(eachstr))
			continue
		end
		
		a = pop!(res)
		b = pop!(res)
		
		if (eachstr[1] == '+')
			push!(res,b+a)
		end
		if (eachstr[1] == '-')
			push!(res,b-a)
		end
		if (eachstr[1] == '*')
			push!(res,b*a)
		end
		if (eachstr[1] == '/')
			push!(res,div(b,a)) # julia's division returns float.
			# div(,) returns truncated division, rounded towards 0
		end
	end	
	return res[1]
end


end
