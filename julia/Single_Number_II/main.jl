import solution
using Base.Test

lstA = [1,2,3,1,2,3,1,2,4,5,6,4,5,6,4,5,6,3,3]

@time @test solution.SingleNumber(lstA) == 3
