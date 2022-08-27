import logo from './logo.svg';
import './App.css';
import { useState, createRef } from 'react';

let totalTime;
let interval;

function App() {
  // creates hour, and the setter for hour
  const [hour, setHour] = useState('');
  const [minute, setMinute] = useState('');
  const [second, setSecond] = useState('');
  const [elapsed, setElapsed] = useState(0);
  const [running, setRunning] = useState(false);
  const [paused, setPaused] = useState(false);
  const button = createRef();
  const changeHour = (evt) => {
    setHour(evt.target.value.replace(/\D/g, ''));
  }
  const changeMinute = (evt) => {
    setMinute(evt.target.value.replace(/\D/g, ''));
  }
  const changeSecond = (evt) => {
    setSecond(evt.target.value.replace(/\D/g, ''));
  }
  const tick = () => {
    setElapsed(x => {
      if (x === totalTime) {
        clearInterval(interval);
        return x;
      } else {
        return x + 1;
      }
    })
  }
  const start = () => {
    if (running) {
      if (paused) {
        // go
        button.current.classList.replace("start", "stop");
        button.current.innerText = "Stop";
        interval = setInterval(tick, 1000);
        setPaused(false);
      } else {
        // stop
        button.current.classList.replace("stop", "start");
        button.current.innerText = "Start";
        clearInterval(interval);
        setPaused(true);
      }
    } else {
      button.current.classList.replace("start", "stop");
      button.current.innerText = "Stop";
      setRunning(true);
      setPaused(false);
      let h = hour.length > 0 ? parseInt(hour, 10) : 0;
      let m = minute.length > 0 ? parseInt(minute, 10) : 0;
      let s = second.length > 0 ? parseInt(second, 10) : 0;

      totalTime = h * 3600 + m * 60 + s;
      setElapsed(0);
      interval = setInterval(tick, 1000);
    }
  }
  const reset = () => {
    button.current.classList.replace("stop", "start");
    button.current.innerText = "Start";
    clearInterval(interval);
    setPaused(false);
    setRunning(false);
  }
  const getTimeString = () => {
    let timeLeft = totalTime - elapsed;
    let h = (timeLeft / 3600 | 0)
      .toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping: false});
    let m = (timeLeft / 60 % 60 | 0)
      .toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping: false});
    let s = (timeLeft % 60 | 0)
      .toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping: false});
    return `${h} : ${m} : ${s}`
  }
  return (
    <div className="OuterDiv">
      <h1>Timer App</h1>
      {running ?
        <h1 className="timer">{getTimeString()}</h1>
        :
        <div className="container">
          <input type="text" className="input" placeholder='h' value={hour} onChange={changeHour} />
          :
          <input type="text" className="input" placeholder='m' value={minute} onChange={changeMinute} />
          :
          <input type="text" className="input" placeholder='s' value={second} onChange={changeSecond} />
        </div>
      }
      <div className="container">
        <button className="gradient__btn start" onClick={start} ref={button}>Start</button>
        <button className="gradient__btn reset" onClick={reset}>Reset</button>
      </div>
    </div>
  );
}

export default App;
