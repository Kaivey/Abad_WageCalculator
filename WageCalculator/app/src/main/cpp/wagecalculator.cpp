<!DOCTYPE html>
<html>
<head>
    <title>Wage Calculator</title>
    <script>
        function calculateWage() {
            var hours = parseFloat(document.getElementById("hours").value);
            var rate = parseFloat(document.getElementById("rate").value);
            
            var wage = hours * rate;
            
            document.getElementById("result").innerHTML = "Wage: $" + wage.toFixed(2);
        }
    </script>
</head>
<body>
    <h2>Wage Calculator</h2>
    
    <label for="hours">Hours:</label>
    <input type="number" id="hours" /><br><br>
    
    <label for="rate">Rate:</label>
    <input type="number" id="rate" /><br><br>
    
    <button onclick="calculateWage()">Calculate</button><br><br>
    
    <div id="result"></div>
</body>
</html>