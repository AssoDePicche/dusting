def select_arr(arr)
  arr.select {|item| item % 2 != 0}
end

def reject_arr(arr)
  arr.reject {|item| item % 3 == 0}
end

def delete_arr(arr)
  arr.delete_if {|item| item < 0}
end

def keep_arr(arr)
  arr.keep_if {|item| item >= 0}
end
