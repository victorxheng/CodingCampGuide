import logo from './logo.svg';
import './App.css';
import {useState} from 'react';
function App() {
  const [calc,setCalc] = useState('');
  const [result,setResult] = useState('');
  const ops = ['/','*','+','.','**','%'];
  const count = 0;
  const temp = 0;
  const updCalc = value => {
    if(
    (ops.includes(value) && calc === '') ||
    (ops.includes(value) && ops.includes(calc.slice(-1)))
    ){
      return;
    }
    setCalc(calc + value);
    if(!ops.includes(value)){
      setResult(eval(calc + value).toString());
    }
  }
  const sqr = () =>{
    let temp = eval(calc)**0.5;
    setResult(temp.toString());
    setCalc(temp.toString());
  }
  const sin = () =>{
    let temp = Math.sin(eval(calc)*Math.PI/180);
    setResult(temp.toString());
    setCalc(temp.toString());
  }
  const cos = () =>{
    let temp = Math.cos(eval(calc)*Math.PI/180);
    setResult(temp.toString());
    setCalc(temp.toString());
  }
  const tan = () =>{
    let temp = Math.tan(eval(calc)*Math.PI/180);
    setResult(temp.toString());
    setCalc(temp.toString());
  }
  const asin = () =>{
    let temp = Math.asin(eval(calc)*Math.PI/180);
    setResult(temp.toString());
    setCalc(temp.toString());
  }
  const acos = () =>{
    let temp = Math.acos(eval(calc)*Math.PI/180);
    setResult(temp.toString());
    setCalc(temp.toString());
  }
  const atan = () =>{
    let temp = Math.atan(eval(calc)*Math.PI/180);
    setResult(temp.toString());
    setCalc(temp.toString());
  }
  const log = () =>{
    let temp = Math.log(eval(calc));
    setResult(temp.toString());
    setCalc(temp.toString());
  }
  const createDigits = () =>{
    const digits = [];
    for(let i = 1; i < 10; i++){
      digits.push(
        <button onClick={() => updCalc(i.toString())}
        key = {i}>{i}</button>
      )
    } 
    return digits;
  }
  const calculate = () =>{
    setCalc(eval(calc).toString());
  }
  const del = () =>{
    if(calc == ''){
      return;
    }
    const value = calc.slice(0,-1);
    setCalc(value);
  }
  const ac = () =>{
    setCalc('');
    setResult('0')
  }
  const factorial = () =>{
    let temp = 1;
    for(let i = parseInt(eval(calc),10); i > 0; i--){
      temp *= i;
    }
    setResult(temp.toString());
    setCalc(temp.toString());
  }
  return(
    <div className='App'>
      <div className='calcu'>
        <div className='display'>
          {result ? <span>({result})</span> : ''}
          &nbsp;
          {calc || '0'}
        </div>
        <div className='op'>
          <button onClick={() => updCalc('/')}>/</button>
          <button onClick={() => updCalc('*')}>*</button>
          <button onClick={() => updCalc('+')}>+</button>
          <button onClick={() => updCalc('-')}>-</button>
          <button onClick={ac}>AC</button>
          <button onClick={() => updCalc('(')}>(</button>
          <button onClick={() => updCalc(')')}>)</button>
          <button onClick={() => updCalc('**')}>^</button>
          <button onClick={sqr}>√</button>
          <button onClick={del}>DEL</button>
          <button onClick={sin}>sin</button>
          <button onClick={cos}>cos</button>
          <button onClick={tan}>tan</button>
          <button onClick ={() => updCalc('%')}>%</button>
          <button onClick={log}>log</button>
          <button onClick={asin}>arcsin</button>
          <button onClick={acos}>arccos</button>
          <button onClick={atan}>arctan</button>
          <button onClick={() => updCalc(Math.PI.toString())}>π</button>
          <button onClick={factorial}>n!</button>
        </div>
        <div className='num'>
          {createDigits()}
          <button onClick={() => updCalc('0')}>0</button>
          <button onClick={() => updCalc('.')}>.</button>
          <button onClick={calculate}>=</button>
        </div>
      </div>
    </div>
  );
}
export default App;