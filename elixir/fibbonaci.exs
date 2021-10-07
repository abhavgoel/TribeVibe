terms = IO.gets("Enter how many terms ") |> String.trim() |> String.to_integer()

if terms <= 0 do
  IO.puts("Please enter a positive integer!")
else
  {list, _last2} =
    Enum.map_reduce(1..terms, {0, 1}, fn
      _t, {0, 1} -> {1, {1, 1}}
      _t, {n1, n2} -> {n1 + n2, {n1 + n2, n1}}
    end)

  Enum.each(list, fn f -> IO.puts("#{f}") end)
end
