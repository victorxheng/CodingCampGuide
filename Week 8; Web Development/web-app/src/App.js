import logo from './logo.svg';
import './App.css';
import {useState} from 'react';

function App() {
  const [hour, setHour] = useState(0);
  const [minute, setMinute] = useState(0);
  const [second, setSecond] = useState(0);
  return (
    <div className="App">
      <h1>Timer</h1>
        <h1>hour&nbsp;&nbsp;&nbsp;:&nbsp;&nbsp;&nbsp;minute&nbsp;&nbsp;&nbsp;:&nbsp;&nbsp;&nbsp;second</h1>
        <div className="countdown-timer-container">
            <input type="number" id="hourinput"  onkeypress = "return isNumberKey(event)"/>
            <input type="number" id="minuteinput"  onkeypress = "return isNumberKey(event)"/>
            <input type="number" id="secondinput"  onkeypress = "return isNumberKey(event)"/>
        </div>
        <div class = "countdown-timer-container">
            <button onclick = "onstart()">Start</button>
            <button onclick = "stop()">Stop</button>
        </div>
    </div>
  );
}

export default App;
