import solution

function leettest(state::Bool)
	if state == true
		println("PASS")
	else 
		println("FAIL")
	end
end


lstA = [1,2,2,3,3,4,4,5,5,6,6,7,1]

@time leettest(solution.SingleNumber(lstA) == 7)