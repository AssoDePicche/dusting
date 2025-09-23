def identify_class(obj)
  className = obj.class.name

  case className
  when "Hacker", "Submission", "TestCase", "Contest"
    puts "It's a " + className + "!"
  else
    puts "It's an unknown model"
  end
end
