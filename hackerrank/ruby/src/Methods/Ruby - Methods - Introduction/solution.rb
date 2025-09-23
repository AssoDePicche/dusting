def prime?(number)
  (2..number).one? {|divisor| number % divisor == 0}
end
